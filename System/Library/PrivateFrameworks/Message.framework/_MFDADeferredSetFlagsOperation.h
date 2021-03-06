/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFOfflineCacheOperation.h>
#import <libobjc.A.dylib/MFDAOfflineCacheOperation.h>

@class NSString;

@interface _MFDADeferredSetFlagsOperation : MFOfflineCacheOperation <MFDAOfflineCacheOperation> {

	unsigned long long _onFlags;
	unsigned long long _offFlags;
	NSString* _messageID;

}
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)performWithAccount:(id)arg1 offlineCache:(id)arg2 ;
-(id)initWithSetFlagsRequest:(id)arg1 ;
@end

