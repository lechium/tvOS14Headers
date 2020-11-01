//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKCacheReader.h"

@class NSString;

@interface GKFriendsCacheReader : GKCacheReader
{
    _Bool _shouldFilter;	// 8 = 0x8
    NSString *_localPlayerID;	// 16 = 0x10
}

+ (id)readerWithDatabaseConnection:(id)arg1 localPlayer:(id)arg2 filterFriendsInCommon:(_Bool)arg3;	// IMP=0x0000000100061394
@property(nonatomic) _Bool shouldFilter; // @synthesize shouldFilter=_shouldFilter;
@property(retain, nonatomic) NSString *localPlayerID; // @synthesize localPlayerID=_localPlayerID;
- (void)readResources:(id)arg1 inDatabase:(struct sqlite3 *)arg2 statementStore:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100061674
- (void)bindParametersForStatement:(struct sqlite3_stmt *)arg1 withPlayer:(id)arg2;	// IMP=0x0000000100061614
- (id)getExpirationDateStatement;	// IMP=0x00000001000615bc
- (id)getFriendPlayerGCIDsStatement;	// IMP=0x00000001000614a8
- (void)dealloc;	// IMP=0x0000000100061458
- (id)initWithDatabaseConnection:(id)arg1 localPlayer:(id)arg2 filterFriendsInCommon:(_Bool)arg3;	// IMP=0x00000001000613e0

@end

