/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CPLResource, NSString;

@interface CPLResourceTransferTask : NSObject <NSSecureCoding> {

	BOOL _highPriority;
	BOOL _cancelled;
	CPLResource* _resource;
	NSString* _taskIdentifier;
	unsigned long long _intent;

}

@property (nonatomic,readonly) CPLResource * resource;                             //@synthesize resource=_resource - In the implementation block
@property (nonatomic,copy,readonly) NSString * taskIdentifier;                     //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (assign,getter=isHighPriority,nonatomic) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
@property (assign,nonatomic) unsigned long long intent;                            //@synthesize intent=_intent - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;                  //@synthesize cancelled=_cancelled - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptionForIntent:(unsigned long long)arg1 ;
+(BOOL)isHighPriorityForIntent:(unsigned long long)arg1 ;
+(id)intentsToBackgroundDownload;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTaskIdentifier:(NSString *)arg1 ;
-(NSString *)taskIdentifier;
-(BOOL)isCancelled;
-(Class)classForKeyedArchiver;
-(void)launch;
-(CPLResource *)resource;
-(void)setIntent:(unsigned long long)arg1 ;
-(unsigned long long)intent;
-(void)setHighPriority:(BOOL)arg1 ;
-(id)initWithResource:(id)arg1 taskIdentifier:(id)arg2 ;
-(void)setResource:(CPLResource *)arg1 ;
-(void)cancelTask;
-(BOOL)isHighPriority;
@end

