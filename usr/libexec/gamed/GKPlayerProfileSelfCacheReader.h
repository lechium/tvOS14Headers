//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKPlayerProfileCacheReader.h"

@interface GKPlayerProfileSelfCacheReader : GKPlayerProfileCacheReader
{
}

- (id)processAvailableResource:(id)arg1 retrievedWithStatement:(struct sqlite3_stmt *)arg2 fromDatabase:(struct sqlite3 *)arg3 statementStore:(id)arg4;	// IMP=0x0000000100075fb0
- (id)emailForPlayerEmailStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x0000000100075ea8
- (void)bindParametersForEmailsStatement:(struct sqlite3_stmt *)arg1 playerRowID:(int)arg2;	// IMP=0x0000000100075e58
- (id)playerEmailsSQLString;	// IMP=0x0000000100075d20
- (double)photoPendingTTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x0000000100075d14
- (double)friendRequestsTTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x0000000100075d08
- (double)challengesTTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x0000000100075cfc
- (double)TTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x0000000100075cf0
- (int)rowIDForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x0000000100075ce4
- (int)lastPlayedGameRowIDForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x0000000100075cd8
- (int)availablePiecesForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x0000000100075ccc
- (id)playerForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x0000000100075604
- (void)bindParametersForProfileStatement:(struct sqlite3_stmt *)arg1 playerGCID:(id)arg2;	// IMP=0x00000001000755c0
- (id)playerProfileSQLString;	// IMP=0x0000000100075478

@end

