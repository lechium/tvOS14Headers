//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class MCCertificatePropertiesInfo;

__attribute__((visibility("hidden")))
@interface MCTVCertificateDetailsViewController : TSKViewController
{
    MCCertificatePropertiesInfo *_certInfo;	// 8 = 0x8
}

+ (id)_dateFormatter;	// IMP=0x0000000000030228
- (void).cxx_destruct;	// IMP=0x00000000000302f4
@property(readonly, nonatomic) MCCertificatePropertiesInfo *certInfo; // @synthesize certInfo=_certInfo;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000002fe9c
- (id)loadSettingGroups;	// IMP=0x000000000002f81c
- (void)viewDidLoad;	// IMP=0x000000000002f630
- (id)initWithPayloadInfo:(id)arg1;	// IMP=0x000000000002f484
- (id)initWithCertificate:(struct __SecCertificate *)arg1;	// IMP=0x000000000002f348

@end

