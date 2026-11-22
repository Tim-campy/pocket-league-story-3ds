// Excerpt of form.SubForm.cpp (readable mode, generated): the per-screen
// dispatch on type_. Whole unit: build/readable-sample/game/form.SubForm.cpp.

// M:form.SubForm.Draw(kairo.unity.ui.Graphics)
void SubForm::Draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    kl_cfg::Config::ensure_initialized();

    pls::cs::Int32 num = x_;
    pls::cs::Int32 num2 = y_;
    if ((require(view_)->GetGameWidth() > 240) || (require(view_)->GetGameHeight() > 240)) {
        pls::cs::Ref<pls::kairo::FormBase> form = require(formMan_)->GetForm(0);
        pls::cs::Int32 id = require(form)->GetId();
        if (((id == 9)) && (SubForm::IsMenu())) {

        } else if (((id == 2)) && (SubForm::IsMenu())) {

        } else {
            num += pls::cs::div_i32((pls::cs::sub_i32(require(view_)->GetGameWidth(), 240)), 2);
            num2 += pls::cs::div_i32((pls::cs::sub_i32(require(view_)->GetGameHeight(), 240)), 2);
        }
    }
    require(g)->SetOrigin(num, num2);
    pls::cs::run_finally(
        [&]() {
            try {
                SubForm::_draw(g);
            } catch (const pls::cs::Exception& cs_caught_122) {
                auto ex = pls::cs::capture_exception(cs_caught_122);
                {
                    if (kl_cfg::Config::DEBUG_CMD()) {
                        kl_unity_util::Log::Info(
                            ([&]() {
                                auto cs_left = pls::cs::String::concat(
                                    pls::cs::String::concat(
                                        literal(
                                            u"\u25A0SubForm.java draw()\u3067\u30A8\u30E9\u30FC\u767A\u751F type_ = ") /* "■SubForm.java draw()でエラー発生 type_ = " */
                                        ,
                                        integer_string(type_)),
                                    literal(u", toString() = "));
                                auto cs_right = this->ToString();
                                return pls::cs::String::concat(cs_left, cs_right);
                            }()),
                            pls::cs::Ref<pls::cs::ExceptionObject>{});
                    }
                    pls::cs::throw_exception(ex);
                }
            }
        },
        [&]() { require(g)->SetOrigin(0, 0); });
}


// M:form.SubForm._draw(kairo.unity.ui.Graphics)
void SubForm::_draw(pls::cs::Ref<pls::kairo::Graphics> g) {
    kl_cfg::Config::ensure_initialized();
    SoccerForm::ensure_initialized();
    data::PlayerData::ensure_initialized();
    game::UserData::ensure_initialized();

    err_method = literal(u"_draw()");
    if (untilActiveHide_ || (wait_ > 0)) {
        return;
    }
    pls::cs::Int32 num24 = pls::cs::Int32{};
    pls::cs::Int32 num = pls::cs::Int32{};
    pls::cs::Int32 num2 = pls::cs::Int32{};
    pls::cs::Int32 num3 = pls::cs::Int32{};
    num3 = 0;
    num2 = num3;
    num = num2;
    num24 = num;
    pls::cs::Ref<pls::kairo::Font> font =
        require(g)->GetFont(static_cast<pls::cs::Ref<pls::kairo::Font>>(pls::cs::Ref<pls::kairo::Font>{}));
    bool flag = false;
    pls::cs::Ref<pls::kairo::FormBase> topForm = require(formMan_)->GetTopForm();
    if (require(topForm)->GetId() == 4) {
    }
    if (SubForm::IsDrawWindow()) {

    } else {
        if (((!(SubForm::IsMenu())) && (!(flag))) && (!(require(apdat_)->IsTopForm(this)))) {
            return;
        }
        if (SubForm::IsMenu() && (!(require(apdat_)->IsTopForm(this)))) {
            pls::cs::Ref<pls::kairo::FormBase> topForm2 = require(formMan_)->GetTopForm();
            if ((require(topForm2)->GetId() == 4) &&
                (!(require((pls::cs::unbox<pls::cs::Ref<SubForm>>(pls::cs::box(topForm2))))->IsMenu()))) {
                return;
            }
        }
    }
    if (((type_ == 1) || (type_ == 16)) || (type_ == 21)) {
        err_line = 205;
        require(apdat_)->DrawWindow(g, 210, 110, 0,
                                    literal(u"\u30E1\u30C3\u30BB\u30FC\u30B8") /* "メッセージ" */);
        require(apdat_)->DrawBox(g, 26, 90, 213, 148);
        if (!is_null(text_)) {
            kairo::unity::ui::TextLayout::Draw(g, text_, 26.0f, 115.0f, 187.0f, 32.0f,
                                               SubForm::SC_WINDOW_BLACK(), 6, 34);
        }
        err_line = 206;
        if ((type_ != 16) || ((((saveState_ == 2) && ([&]() {
                                    auto cs_left = pls::cs::box(selectButtons_);
                                    auto cs_right = pls::cs::box(pls::cs::Array<pls::cs::String>{});
                                    return cs_left != cs_right;
                                }())) &&
                               !is_null(font)))) {
            pls::cs::Single num4 = 0.0f;
            err_line = 2061;
            for (pls::cs::Int32 i = 0; i < (selectButtons_).length(); ++i) {
                if (is_null(selectButtons_[i])) {
                    continue;
                }
                pls::cs::Single num5 = pls::cs::Single(([&]() -> pls::cs::Single {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Font>>(font);
                    pls::cs::String cs_arg0 = selectButtons_[i];
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    return cs_receiver->StringWidthF(cs_arg0);
                }()));
                if (num4 < num5) {
                    num4 = num5;
                }
            }
            num4 += 2.0f;
            err_line = 2062;
            pls::cs::Int32 num6 = 72;
            pls::cs::Int32 num7 = 200;
            pls::cs::Int32 num8 = 200;
            for (pls::cs::Int32 j = 0; j < (selectButtons_).length(); ++j) {
                if (is_null(selectButtons_[j])) {
                    continue;
                }
                pls::cs::Int32 num9 =
                    ((120 - (((pls::cs::sub_i32((selectButtons_).length(), 1)) * num6) / 2)) + (j * num6));
                if (j == select_) {
                    require(g)->SetColor(SubForm::SC_WINDOW_SELECT());
                    require(g)->FillRect(((pls::cs::Single(num9) - (num4 / 2.0f)) - 5.0f), 164.0f,
                                         (num4 + 10.0f), 17.0f);
                }
                require(g)->SetColor(SubForm::SC_WINDOW_BLACK());
                {
                    auto cs_receiver = static_cast<pls::cs::Ref<pls::kairo::Graphics>>(g);
                    pls::cs::String cs_arg0 = selectButtons_[j];
                    pls::cs::Single cs_arg1 = num9;
                    pls::cs::Single cs_arg2 = 167.0f;
                    std::int32_t cs_arg3 = 2;
                    if (!cs_receiver) {
                        throw pls::cs::NullReferenceException();
                    }
                    cs_receiver->DrawString(cs_arg0, cs_arg1, cs_arg2, cs_arg3);
                }
                surface::GameView::AddTouch(
                    g, 3,
                    pls::cs::conv_i32(
                        ((((pls::cs::Single(num9) - (num4 / 2.0f)) - 5.0f) - pls::cs::Single(((num7 / 2)))))),
                    (164 - (num8 / 2)), pls::cs::conv_i32((((num4 + 10.0f) + pls::cs::Single(num7)))),
                    (17 + num8), (0x20000 | j));
            }
        }
        err_line = 207;
    } else {
        if (type_ == 2) {

        } else if (type_ == 3) {
            SubForm::DrawMenu_btmInfo(g);
            SubForm::DrawMenu(g, 0);
            surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
        } else if (type_ == 4) {
            SubForm::DrawMenu(g, 0);
            surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
        } else if (type_ == 8) {
            SubForm::DrawMenu(g, 1);
            surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
        } else if (type_ == 5) {
            SubForm::DrawMenu(g, 1);
            surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
        } else if (type_ == 7) {
            SubForm::DrawMenu(g, 1);
            surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
        } else if (type_ == 6) {
            SubForm::DrawMenu(g, 1);
            surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
        } else if (type_ == 9) {
            SubForm::DrawMenu(g, 1);
            surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
        } else if (type_ == 10) {
            SubForm::DrawMenu(g, 1);
            surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
        } else if (type_ == 11) {
            SubForm::DrawMenu(g, 1);
            surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
        } else if (type_ == 12) {
            SubForm::DrawMenu(g, 1);
            surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
        } else if (type_ == 22) {
            SubForm::DrawMenu(g, 1);
            surface::GameView::AddTouch(4, 22, kairo::unity::surface::TouchOption::CreateInt(2));
        } else if (type_ == 0) {
            require(apdat_)->DrawWindow(
                g, 202, 122, 0,
                literal(u"\u4F1A\u8A71\u30A6\u30A3\u30F3\u30C9\u30A6") /* "会話ウィンドウ" */);
            require(apdat_)->DrawBox(g, 27, 82, 214, 159);
            require(g)->SetColor(SubForm::SC_WINDOW_BLACK());
            require(textLay_)->Draw(g, 37.0f, 100.0f);
            if (humanCharaType_ == 0) {
                SubForm::Draw_chara(g, 172, 0, 1, frame_, 193, 189);
                require(g)->SetColor(SubForm::SC_WINDOW_BLACK());
                require(g)->DrawString(literal(u"\u59EB\u5DDD\u30C1\u30A2\u5B50") /* "姫川チア子" */, 84.0f,
                                       174.0f);
            } else if (humanCharaType_ == 1) {
    // ... (1296 more lines in the full unit)
}
