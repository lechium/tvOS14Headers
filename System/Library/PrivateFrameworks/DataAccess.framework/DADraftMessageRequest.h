/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAMailboxRequest.h>

@class DAMailMessage;

@interface DADraftMessageRequest : DAMailboxRequest {

	BOOL _send;
	DAMailMessage* _message;

}

@property (nonatomic,retain) DAMailMessage * message;              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL send;                            //@synthesize send=_send - In the implementation block
-(id)description;
-(DAMailMessage *)message;
-(void)setMessage:(DAMailMessage *)arg1 ;
-(BOOL)send;
-(void)setSend:(BOOL)arg1 ;
-(id)initWithRequestType:(int)arg1 message:(id)arg2 send:(BOOL)arg3 ;
@end

