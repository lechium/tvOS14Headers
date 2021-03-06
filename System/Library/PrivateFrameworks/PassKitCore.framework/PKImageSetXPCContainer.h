/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject, NSData;

@interface PKImageSetXPCContainer : NSObject <NSSecureCoding> {

	unsigned long long _length;
	BOOL _isShmem;
	unsigned long long _offset;
	NSObject*<OS_xpc_object> _data;
	NSData* _imageSetHash;

}

@property (nonatomic,readonly) NSData * imageSetHash;              //@synthesize imageSetHash=_imageSetHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)purge;
-(NSData *)imageSetHash;
-(id)containedImageSet;
-(id)initWithWithXPCObject:(id)arg1 hash:(id)arg2 ;
-(id)initWithWithXPCObject:(id)arg1 length:(unsigned long long)arg2 isSharedMemory:(BOOL)arg3 offset:(unsigned long long)arg4 hash:(id)arg5 ;
@end

