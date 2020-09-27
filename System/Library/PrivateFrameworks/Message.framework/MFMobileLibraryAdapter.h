/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFQueryableLibraryAdapter.h>

@class MFMailMessageLibrary, NSArray, NSString;

@interface MFMobileLibraryAdapter : NSObject <MFQueryableLibraryAdapter> {

	MFMailMessageLibrary* _library;
	NSArray* _accounts;

}

@property (nonatomic,retain) MFMailMessageLibrary * library;              //@synthesize library=_library - In the implementation block
@property (nonatomic,retain) NSArray * accounts;                          //@synthesize accounts=_accounts - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSArray *)accounts;
-(MFMailMessageLibrary *)library;
-(void)setAccounts:(NSArray *)arg1 ;
-(void)setLibrary:(MFMailMessageLibrary *)arg1 ;
-(id)countMessagesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2 groupBy:(unsigned long long)arg3 ;
-(id)mailboxesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2 ;
-(id)messagesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)_userCreatedMailboxes;
-(id)_criterionForQuery:(unsigned long long)arg1 variable:(id)arg2 ;
-(unsigned long long)countMessagesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2 ;
-(id)initWithAccounts:(id)arg1 mailLibrary:(id)arg2 ;
-(id)mostRecent:(unsigned long long)arg1 messagesForMailbox:(id)arg2 ;
@end
