/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface BSXPCReply : NSObject {

	NSObject*<OS_xpc_object> _reply;
	int _sent;

}
+(id)replyForMessage:(id)arg1 ;
+(id)messageWithReply:(id)arg1 ;
-(id)initWithReply:(id)arg1 ;
-(id)initForMessage:(id)arg1 ;
-(void)sendReply:(/*^block*/id)arg1 ;
-(long long)messageKind;
-(id)message;
@end

