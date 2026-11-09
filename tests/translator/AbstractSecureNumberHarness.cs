// Test-only concrete receiver. All behavior remains in the source-oracle base.
public sealed class HarnessAbstractSecureNumber : kairo.unity.util.SecureNumber
{
    public HarnessAbstractSecureNumber() : base() { }
    public HarnessAbstractSecureNumber(long value) : base(value) { }
}
