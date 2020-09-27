/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class Protocol, NSInvocation;

@interface CKDLongLivedOperationPersistedCallback : NSObject <NSSecureCoding> {

	BOOL _isCompletionCallback;
	Protocol* _protocol;
	NSInvocation* _invocation;

}

@property (nonatomic,retain) Protocol * protocol;                    //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) NSInvocation * invocation;              //@synthesize invocation=_invocation - In the implementation block
@property (assign,nonatomic) BOOL isCompletionCallback;              //@synthesize isCompletionCallback=_isCompletionCallback - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Protocol *)protocol;
-(NSInvocation *)invocation;
-(void)setProtocol:(Protocol *)arg1 ;
-(id)initWithProtocol:(id)arg1 invocation:(id)arg2 isCompletionCallback:(BOOL)arg3 ;
-(void)_validateInvocation;
-(void)setInvocation:(NSInvocation *)arg1 ;
-(BOOL)isCompletionCallback;
-(void)setIsCompletionCallback:(BOOL)arg1 ;
@end
