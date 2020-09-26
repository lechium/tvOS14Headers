//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVExpressTapToSetupViewDataSource-Protocol.h"
#import "SATVExpressTapToSetupViewDelegate-Protocol.h"

@class NSString, SATVExpressTapToSetupDataSource, SATVExpressTapToSetupView;

@interface SATVExpressTapToSetupViewController : TVSKViewController <SATVExpressTapToSetupViewDataSource, SATVExpressTapToSetupViewDelegate>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    SATVExpressTapToSetupDataSource *_dataSource;	// 16 = 0x10
    SATVExpressTapToSetupView *_expressTapToSetupView;	// 24 = 0x18
}

+ (id)new;	// IMP=0x00000001000677b4
- (void).cxx_destruct;	// IMP=0x000000010006807c
@property(readonly, nonatomic) SATVExpressTapToSetupView *expressTapToSetupView; // @synthesize expressTapToSetupView=_expressTapToSetupView;
@property(readonly, nonatomic) SATVExpressTapToSetupDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_callCompletionHandlerWithUseExpressTapToSetup:(_Bool)arg1;	// IMP=0x0000000100067fbc
- (void)expressTapToSetupViewDidSelectLearnMore:(id)arg1;	// IMP=0x0000000100067d10
- (void)expressTapToSetupViewDidSelectCustomizeSetup:(id)arg1;	// IMP=0x0000000100067d00
- (void)expressTapToSetupViewDidSelectPerformExpressSetup:(id)arg1;	// IMP=0x0000000100067cf0
- (long long)expressTapToSetupView:(id)arg1 imageSymbolScaleForSettingItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100067c78
- (id)expressTapToSetupView:(id)arg1 imageSymbolNameForSettingItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100067bf8
- (id)expressTapToSetupView:(id)arg1 textForSettingItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100067b78
- (unsigned long long)numberOfSettingItemsForExpressTapToSetupView:(id)arg1;	// IMP=0x0000000100067b04
- (id)deviceClassForExpressTapToSetupView:(id)arg1;	// IMP=0x0000000100067ab0
- (id)deviceNameForExpressTapToSetupView:(id)arg1;	// IMP=0x0000000100067a5c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000001000679e8
- (void)loadView;	// IMP=0x000000010006799c
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000100067880
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100067848
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100067810
- (id)init;	// IMP=0x00000001000677d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

