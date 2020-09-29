/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:27 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Message/MFMailMessage.h>

@class NSString, NSData;

@interface MFPOPMessage : MFMailMessage {

	long long _messageNumber;
	NSString* _messageID;
	NSData* _messageData;
	BOOL _messageDataIsComplete;
	unsigned long long _size;
	NSString* _accountURL;

}
-(void)dealloc;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(unsigned long long)messageSize;
-(id)messageID;
-(id)headers;
-(id)messageData;
-(void)setMessageData:(id)arg1 ;
-(void)setMessageID:(id)arg1 ;
-(long long)messageNumber;
-(void)setMessageNumber:(long long)arg1 ;
-(BOOL)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(BOOL)messageDataHolder:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(id)headersIfAvailable;
-(id)messageDataHolder;
-(id)originalMailboxURL;
-(id)remoteMailboxURL;
-(void)setMessageData:(id)arg1 isComplete:(BOOL)arg2 ;
-(void)setAccountURL:(id)arg1 ;
@end

