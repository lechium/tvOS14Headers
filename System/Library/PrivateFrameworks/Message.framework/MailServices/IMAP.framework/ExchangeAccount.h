/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:14 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <IMAP/IMAPAccount.h>

@interface ExchangeAccount : IMAPAccount
+(id)accountTypeString;
-(Class)connectionClass;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(id)_defaultSpecialMailboxNameForType:(int)arg1 ;
-(BOOL)shouldExpungeMessagesOnDelete;
-(void)filterMailboxList:(id)arg1 forMailbox:(id)arg2 options:(int)arg3 ;
-(void)_filterMailboxList:(id)arg1 forMailboxWithPath:(id)arg2 iisServer:(id)arg3 ;
-(BOOL)_syncOnly_defaultValueForShouldStoreJunkOnServer;
-(BOOL)storeDraftsOnServer;
-(BOOL)storeSentMessagesOnServer;
@end

