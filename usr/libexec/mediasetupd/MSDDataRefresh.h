//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MSDDataRefresh : NSObject
{
    _Bool _usingCloudKit;	// 8 = 0x8
    unsigned long long _refreshReason;	// 16 = 0x10
    double _delay;	// 24 = 0x18
}

+ (void)cacheLastRefreshforHomes:(id)arg1;	// IMP=0x000000010001ef6c
+ (void)clearLastRefreshTSForHomes;	// IMP=0x000000010001eee8
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) _Bool usingCloudKit; // @synthesize usingCloudKit=_usingCloudKit;
@property(readonly, nonatomic) unsigned long long refreshReason; // @synthesize refreshReason=_refreshReason;
- (void)_handleCKShareError:(id)arg1 home:(id)arg2;	// IMP=0x0000000100021a58
- (id)_containsFatalError:(id)arg1;	// IMP=0x000000010002190c
- (_Bool)_shouldPreformRefresh:(id)arg1;	// IMP=0x0000000100021674
- (void)_setupShareForParticipant:(id)arg1 home:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002138c
- (void)_saveMediaServiceConfigInfo:(id)arg1 record:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000210f0
- (void)_updateDefaultService:(id)arg1 record:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100020cf8
- (void)_shareThisRecordIfApplicable:(id)arg1 home:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010002090c
- (void)_createAndSaveAppleMusicRecord:(id)arg1 publicDBInfo:(id)arg2 home:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100020268
- (_Bool)_shouldProceedWithExecution:(id)arg1;	// IMP=0x000000010002019c
- (void)_checkDataSanity:(id)arg1 publicDBInfo:(id)arg2 home:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010001f920
- (void)_initializeCKAndServiceInfoForHome:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f41c
- (void)refreshDataAfterDelay;	// IMP=0x000000010001f114
- (void)_refreshDatabases:(CDUnknownBlockType)arg1;	// IMP=0x000000010001e828
- (void)_deleteRecordZone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001e604
- (void)_deleteZombieRecordZonesIfAny:(CDUnknownBlockType)arg1;	// IMP=0x000000010001d740
- (void)_checkZoneAndDefaultRecordInEachHome:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001d074
- (void)_performDataRefresh:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c6e4
- (void)performRefreshWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010001c338
- (id)initWithReason:(unsigned long long)arg1 withDelay:(double)arg2;	// IMP=0x000000010001c2d8
- (id)initWithReason:(unsigned long long)arg1 usingCloudKit:(_Bool)arg2;	// IMP=0x000000010001c288

@end

