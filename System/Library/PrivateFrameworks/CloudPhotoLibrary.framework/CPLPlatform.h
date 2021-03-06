/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMapTable, NSObject, NSString;

@interface CPLPlatform : NSObject {

	NSMapTable* _abstractClassToImplementation;
	NSObject*<OS_dispatch_queue> _lock;
	NSString* _suffix;

}

@property (nonatomic,copy) NSString * suffix;              //@synthesize suffix=_suffix - In the implementation block
+(id)currentPlatform;
+(void)setProxyImplementationForPlatform:(id)arg1 ;
+(void)setDefaultPlatform:(id)arg1 ;
+(id)defaultPlatform;
-(id)description;
-(id)init;
-(void)setSuffix:(NSString *)arg1 ;
-(NSString *)suffix;
-(void)setPlatformImplementation:(Class)arg1 forClass:(Class)arg2 ;
-(Class)implementationClassForAbstractClass:(Class)arg1 ;
-(id)newPlatformImplementationForObject:(id)arg1 ;
@end

