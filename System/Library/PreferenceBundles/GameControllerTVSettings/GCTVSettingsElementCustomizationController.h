//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class GCController, GCControllerButtonInput, GCControllerDirectionPad, GCControllerElement, GCControllerSettings, GCTVSettingsElementCustomizationControllerRepresentedObject, GCTVSettingsPreviewViewController;

@interface GCTVSettingsElementCustomizationController : TSKViewController
{
    GCTVSettingsPreviewViewController *_appPreviewViewController;	// 8 = 0x8
    GCController *_device;	// 16 = 0x10
    GCControllerElement *_element;	// 24 = 0x18
    GCControllerSettings *_settings;	// 32 = 0x20
    GCTVSettingsElementCustomizationControllerRepresentedObject *_representedObject;	// 40 = 0x28
    GCControllerElement *_mappedElement;	// 48 = 0x30
    GCControllerDirectionPad *_dpad;	// 56 = 0x38
    GCControllerButtonInput *_button;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000006794
@property(retain, nonatomic) GCControllerButtonInput *button; // @synthesize button=_button;
@property(retain, nonatomic) GCControllerDirectionPad *dpad; // @synthesize dpad=_dpad;
@property(retain, nonatomic) GCControllerElement *mappedElement; // @synthesize mappedElement=_mappedElement;
@property(retain, nonatomic) GCTVSettingsElementCustomizationControllerRepresentedObject *representedObject; // @synthesize representedObject=_representedObject;
@property(retain, nonatomic) GCControllerSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) GCControllerElement *element; // @synthesize element=_element;
@property(retain, nonatomic) GCController *device; // @synthesize device=_device;
- (void)dealloc;	// IMP=0x00000000000065fc
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000064d8
- (id)loadSettingGroups;	// IMP=0x00000000000059ec
- (void)updateMappableControllerElements;	// IMP=0x00000000000055e0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000052d4
- (void)viewDidLoad;	// IMP=0x0000000000005220
- (id)init;	// IMP=0x00000000000051a0

@end
