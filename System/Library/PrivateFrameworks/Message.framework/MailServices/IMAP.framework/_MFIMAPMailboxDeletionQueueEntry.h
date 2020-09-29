/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:14 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSArray, IMAPAccount;

@interface _MFIMAPMailboxDeletionQueueEntry : NSObject {

	NSArray* urls;
	NSArray* paths;
	IMAPAccount* account;

}

@property (copy) NSArray * urls; 
@property (copy) NSArray * paths; 
@property (retain) IMAPAccount * account; 
-(void)dealloc;
-(NSArray *)paths;
-(void)setPaths:(NSArray *)arg1 ;
-(NSArray *)urls;
-(void)setUrls:(NSArray *)arg1 ;
-(IMAPAccount *)account;
-(void)setAccount:(IMAPAccount *)arg1 ;
@end
