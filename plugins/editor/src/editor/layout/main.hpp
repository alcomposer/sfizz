/* This file is generated by the layout maker tool. */
auto* const view__0 = createLogicalGroup(CRect(0, 0, 800, 475), -1, "", kCenterText, 14);
mainView = view__0;
auto* const view__1 = createBackground(CRect(190, 110, 790, 390), -1, "", kCenterText, 14);
imageContainer_ = view__1;
view__0->addView(view__1);
enterPalette(invertedPalette);
auto* const view__2 = createLogicalGroup(CRect(0, 0, 800, 110), -1, "", kCenterText, 14);
view__0->addView(view__2);
auto* const view__3 = createRoundedGroup(CRect(5, 4, 180, 105), -1, "", kCenterText, 14);
view__2->addView(view__3);
auto* const view__4 = createAboutButton(CRect(27, 5, 147, 65), kTagAbout, "", kCenterText, 14);
view__3->addView(view__4);
auto* const view__5 = createHomeButton(CRect(31, 69, 63, 101), kTagFirstChangePanel+kPanelGeneral, "", kCenterText, 30);
panelButtons_[kPanelGeneral] = view__5;
view__3->addView(view__5);
auto* const view__6 = createCCButton(CRect(71, 69, 103, 101), kTagFirstChangePanel+kPanelControls, "", kCenterText, 30);
panelButtons_[kPanelControls] = view__6;
view__3->addView(view__6);
auto* const view__7 = createSettingsButton(CRect(111, 69, 143, 101), kTagFirstChangePanel+kPanelSettings, "", kCenterText, 30);
panelButtons_[kPanelSettings] = view__7;
view__3->addView(view__7);
auto* const view__8 = createRoundedGroup(CRect(185, 5, 565, 105), -1, "", kCenterText, 14);
view__2->addView(view__8);
auto* const view__9 = createHLine(CRect(10, 36, 370, 41), -1, "", kCenterText, 14);
view__8->addView(view__9);
auto* const view__10 = createHLine(CRect(10, 68, 370, 73), -1, "", kCenterText, 14);
view__8->addView(view__10);
auto* const view__11 = createClickableLabel(CRect(10, 8, 260, 38), kTagLoadSfzFile, "DefaultInstrument.sfz", kLeftText, 20);
sfzFileLabel_ = view__11;
view__8->addView(view__11);
auto* const view__12 = createLabel(CRect(80, 40, 370, 70), -1, "", kLeftText, 20);
keyswitchLabel_ = view__12;
view__8->addView(view__12);
auto* const view__13 = createBadge(CRect(10, 42, 70, 68), -1, "", kCenterText, 20);
keyswitchBadge_ = view__13;
view__8->addView(view__13);
auto* const view__14 = createInactiveLabel(CRect(10, 40, 370, 70), -1, "No key switch", kLeftText, 20);
keyswitchInactiveLabel_ = view__14;
view__8->addView(view__14);
view__14->setVisible(false);
auto* const view__15 = createLabel(CRect(10, 73, 70, 98), -1, "Voices:", kRightText, 12);
view__8->addView(view__15);
auto* const view__16 = createPreviousFileButton(CRect(295, 13, 320, 38), kTagPreviousSfzFile, "", kCenterText, 24);
view__8->addView(view__16);
auto* const view__17 = createNextFileButton(CRect(320, 13, 345, 38), kTagNextSfzFile, "", kCenterText, 24);
view__8->addView(view__17);
auto* const view__18 = createChevronDropDown(CRect(345, 13, 370, 38), kTagFileOperations, "", kCenterText, 24);
fileOperationsMenu_ = view__18;
view__8->addView(view__18);
auto* const view__19 = createLabel(CRect(75, 73, 115, 98), -1, "", kCenterText, 12);
infoVoicesLabel_ = view__19;
view__8->addView(view__19);
auto* const view__20 = createLabel(CRect(130, 73, 170, 98), -1, "Max:", kRightText, 12);
view__8->addView(view__20);
auto* const view__21 = createLabel(CRect(175, 73, 210, 98), -1, "", kCenterText, 12);
numVoicesLabel_ = view__21;
view__8->addView(view__21);
auto* const view__22 = createLabel(CRect(240, 73, 300, 98), -1, "Memory:", kRightText, 12);
view__8->addView(view__22);
auto* const view__23 = createLabel(CRect(305, 73, 365, 98), -1, "", kCenterText, 12);
memoryLabel_ = view__23;
view__8->addView(view__23);
auto* const view__24 = createChevronValueDropDown(CRect(210, 77, 230, 97), kTagSetNumVoices, "", kCenterText, 16);
numVoicesSlider_ = view__24;
view__8->addView(view__24);
auto* const view__25 = createRoundedGroup(CRect(570, 5, 795, 105), -1, "", kCenterText, 14);
view__2->addView(view__25);
auto* const view__26 = createKnob48(CRect(45, 15, 93, 63), -1, "", kCenterText, 14);
view__25->addView(view__26);
view__26->setVisible(false);
auto* const view__27 = createValueLabel(CRect(40, 65, 100, 70), -1, "Center", kCenterText, 12);
view__25->addView(view__27);
view__27->setVisible(false);
auto* const view__28 = createVMeter(CRect(175, 15, 210, 70), -1, "", kCenterText, 14);
view__25->addView(view__28);
auto* const view__29 = createKnobCCBox(CRect(10, 5, 80, 95), kTagSetCCVolume, "Volume", kCenterText, 12);
volumeCCKnob_ = view__29;
view__25->addView(view__29);
auto* const view__30 = createKnobCCBox(CRect(85, 5, 155, 95), kTagSetCCPan, "Pan", kCenterText, 12);
panCCKnob_ = view__30;
view__25->addView(view__30);
enterPalette(defaultPalette);
auto* const view__31 = createLogicalGroup(CRect(5, 110, 796, 395), -1, "", kCenterText, 14);
subPanels_[kPanelGeneral] = view__31;
view__0->addView(view__31);
view__31->setVisible(false);
auto* const view__32 = createRoundedGroup(CRect(0, 0, 175, 280), -1, "", kCenterText, 14);
view__31->addView(view__32);
auto* const view__33 = createLabel(CRect(15, 10, 75, 35), -1, "Curves:", kLeftText, 14);
view__32->addView(view__33);
auto* const view__34 = createLabel(CRect(15, 35, 75, 60), -1, "Masters:", kLeftText, 14);
view__32->addView(view__34);
auto* const view__35 = createLabel(CRect(15, 60, 75, 85), -1, "Groups:", kLeftText, 14);
view__32->addView(view__35);
auto* const view__36 = createLabel(CRect(15, 85, 75, 110), -1, "Regions:", kLeftText, 14);
view__32->addView(view__36);
auto* const view__37 = createLabel(CRect(15, 110, 75, 135), -1, "Samples:", kLeftText, 14);
view__32->addView(view__37);
auto* const view__38 = createLabel(CRect(115, 10, 155, 35), -1, "0", kCenterText, 14);
infoCurvesLabel_ = view__38;
view__32->addView(view__38);
auto* const view__39 = createLabel(CRect(115, 35, 155, 60), -1, "0", kCenterText, 14);
infoMastersLabel_ = view__39;
view__32->addView(view__39);
auto* const view__40 = createLabel(CRect(115, 60, 155, 85), -1, "0", kCenterText, 14);
infoGroupsLabel_ = view__40;
view__32->addView(view__40);
auto* const view__41 = createLabel(CRect(115, 85, 155, 110), -1, "0", kCenterText, 14);
infoRegionsLabel_ = view__41;
view__32->addView(view__41);
auto* const view__42 = createLabel(CRect(115, 110, 155, 135), -1, "0", kCenterText, 14);
infoSamplesLabel_ = view__42;
view__32->addView(view__42);
auto* const view__43 = createLogicalGroup(CRect(5, 110, 795, 395), -1, "", kCenterText, 14);
subPanels_[kPanelControls] = view__43;
view__0->addView(view__43);
view__43->setVisible(false);
auto* const view__44 = createRoundedGroup(CRect(0, 0, 790, 285), -1, "", kCenterText, 14);
view__43->addView(view__44);
auto* const view__45 = createControlsPanel(CRect(0, 0, 790, 285), -1, "", kCenterText, 12);
controlsPanel_ = view__45;
view__44->addView(view__45);
auto* const view__46 = createLogicalGroup(CRect(5, 109, 795, 425), -1, "", kCenterText, 14);
subPanels_[kPanelSettings] = view__46;
view__0->addView(view__46);
auto* const view__47 = createTitleGroup(CRect(300, 26, 495, 126), -1, "Engine", kCenterText, 12);
view__46->addView(view__47);
auto* const view__48 = createValueMenu(CRect(25, 60, 85, 85), kTagSetOversampling, "", kCenterText, 12);
oversamplingSlider_ = view__48;
view__47->addView(view__48);
auto* const view__49 = createValueLabel(CRect(15, 20, 95, 45), -1, "Oversampling", kCenterText, 12);
view__47->addView(view__49);
auto* const view__50 = createValueLabel(CRect(100, 20, 180, 45), -1, "Preload size", kCenterText, 12);
view__47->addView(view__50);
auto* const view__51 = createValueMenu(CRect(110, 60, 170, 85), kTagSetPreloadSize, "", kCenterText, 12);
preloadSizeSlider_ = view__51;
view__47->addView(view__51);
auto* const view__52 = createTitleGroup(CRect(170, 161, 585, 261), -1, "Tuning", kCenterText, 12);
view__46->addView(view__52);
auto* const view__53 = createValueLabel(CRect(155, 20, 235, 45), -1, "Root key", kCenterText, 12);
view__52->addView(view__53);
auto* const view__54 = createValueMenu(CRect(250, 60, 310, 85), kTagSetTuningFrequency, "", kCenterText, 12);
tuningFrequencySlider_ = view__54;
view__52->addView(view__54);
auto* const view__55 = createValueLabel(CRect(240, 20, 320, 45), -1, "Frequency", kCenterText, 12);
view__52->addView(view__55);
auto* const view__56 = createStyledKnob(CRect(340, 45, 388, 93), kTagSetStretchedTuning, "", kCenterText, 14);
stretchedTuningSlider_ = view__56;
view__52->addView(view__56);
auto* const view__57 = createValueLabel(CRect(325, 20, 405, 45), -1, "Stretch", kCenterText, 12);
view__52->addView(view__57);
auto* const view__58 = createValueLabel(CRect(20, 20, 120, 45), -1, "Scala file", kCenterText, 12);
view__52->addView(view__58);
auto* const view__59 = createValueButton(CRect(20, 60, 120, 85), kTagLoadScalaFile, "DefaultScale", kCenterText, 12);
scalaFileButton_ = view__59;
view__52->addView(view__59);
auto* const view__60 = createValueMenu(CRect(165, 60, 200, 85), kTagSetScalaRootKey, "", kCenterText, 12);
scalaRootKeySlider_ = view__60;
view__52->addView(view__60);
auto* const view__61 = createValueMenu(CRect(200, 60, 230, 85), kTagSetScalaRootKey, "", kCenterText, 12);
scalaRootOctaveSlider_ = view__61;
view__52->addView(view__61);
auto* const view__62 = createResetSomethingButton(CRect(120, 60, 145, 85), kTagResetScalaFile, "", kCenterText, 12);
scalaResetButton_ = view__62;
view__52->addView(view__62);
auto* const view__63 = createTitleGroup(CRect(615, 161, 754, 261), -1, "Files", kCenterText, 12);
userFilesGroup_ = view__63;
view__46->addView(view__63);
auto* const view__64 = createValueLabel(CRect(20, 20, 120, 45), -1, "User SFZ folder", kCenterText, 12);
view__63->addView(view__64);
auto* const view__65 = createValueButton(CRect(20, 60, 120, 85), kTagChooseUserFilesDir, "DefaultPath", kCenterText, 12);
userFilesDirButton_ = view__65;
view__63->addView(view__65);
auto* const view__66 = createTitleGroup(CRect(525, 26, 720, 126), -1, "Quality", kCenterText, 12);
view__46->addView(view__66);
auto* const view__67 = createValueMenu(CRect(15, 60, 95, 85), kTagSetSampleQuality, "", kCenterText, 12);
sampleQualitySlider_ = view__67;
view__66->addView(view__67);
auto* const view__68 = createValueLabel(CRect(15, 20, 95, 45), -1, "Sample", kCenterText, 12);
view__66->addView(view__68);
auto* const view__69 = createValueLabel(CRect(100, 20, 180, 45), -1, "Oscillator", kCenterText, 12);
view__66->addView(view__69);
auto* const view__70 = createValueMenu(CRect(100, 60, 180, 85), kTagSetOscillatorQuality, "", kCenterText, 12);
oscillatorQualitySlider_ = view__70;
view__66->addView(view__70);
auto* const view__71 = createTitleGroup(CRect(35, 161, 140, 261), -1, "Theme", kCenterText, 12);
view__46->addView(view__71);
view__71->setVisible(false);
auto* const view__72 = createOptionMenu(CRect(20, 60, 85, 85), kTagThemeMenu, "", kCenterText, 12);
themeMenu_ = view__72;
view__71->addView(view__72);
auto* const view__73 = createPiano(CRect(5, 400, 795, 470), -1, "", kCenterText, 12);
piano_ = view__73;
view__0->addView(view__73);
