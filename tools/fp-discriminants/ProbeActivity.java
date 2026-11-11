package org.plsresearch.floatprobe;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;
import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;

/** Local numerical oracle. Does not launch or replace the installed game. */
public final class ProbeActivity extends Activity {
    static { System.loadLibrary("fp_probe"); }
    private static native String runProbe(String data, String nativeLibraries);
    private void copyAssets(String asset, File target) throws Exception {
        String[] children = getAssets().list(asset);
        if (children != null && children.length > 0) {
            if (!target.isDirectory() && !target.mkdirs()) throw new Exception("Cannot create " + target);
            for (String child : children) copyAssets(asset + "/" + child, new File(target, child));
        } else {
            try (InputStream input = getAssets().open(asset); FileOutputStream output = new FileOutputStream(target)) {
                byte[] buffer = new byte[65536]; int size;
                while ((size = input.read(buffer)) != -1) output.write(buffer, 0, size);
            }
        }
    }
    @Override public void onCreate(Bundle state) {
        super.onCreate(state);
        final TextView text = new TextView(this);
        text.setText("Numerical oracle: running locally. No network access.");
        setContentView(text);
        new Thread(new Runnable() {
            public void run() {
                String result;
                try {
                    File directory = new File(getFilesDir(), "probe");
                    copyAssets("probe", directory);
                    result = runProbe(directory.getAbsolutePath(), getApplicationInfo().nativeLibraryDir);
                } catch (Throwable failure) { result = failure.toString(); }
                final String message = result;
                android.util.Log.i("PLSFloatProbe", message);
                runOnUiThread(new Runnable() { public void run() { text.setText(message); } });
            }
        }, "numerical-oracle").start();
    }
}
