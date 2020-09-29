/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:40 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol OS_os_transaction;
#import <CMCapture/CMCapture-Structs.h>
@class NSObject, NSURL, NSString, BWStillImageCaptureSettings, FigCaptureStillImageSettings, NSMutableArray, NSArray, NSDictionary;

@interface BWDeferredContainer : NSObject {

	long long _creationTimeNS;
	opaque_pthread_rwlock_t _lock;
	NSObject*<OS_os_transaction> _transaction;
	NSURL* _baseFolderURL;
	NSString* _applicationID;
	NSString* _captureRequestIdentifier;
	long long _manifestVersion;
	BWStillImageCaptureSettings* _stillImageCaptureSettings;
	FigCaptureStillImageSettings* _stillImageSettings;
	NSMutableArray* _intermediates;
	NSMutableArray* _photoDescriptors;
	NSArray* _bufferAttributes;

}

@property (nonatomic,readonly) unsigned processingType; 
@property (nonatomic,readonly) NSString * applicationID; 
@property (nonatomic,readonly) NSString * captureRequestIdentifier;                               //@synthesize captureRequestIdentifier=_captureRequestIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long captureRequestIdentifierBytesLow; 
@property (nonatomic,readonly) unsigned long long captureRequestIdentifierBytesHigh; 
@property (nonatomic,readonly) long long manifestVersion;                                         //@synthesize manifestVersion=_manifestVersion - In the implementation block
@property (nonatomic,readonly) NSDictionary * manifest; 
@property (nonatomic,readonly) BWStillImageCaptureSettings * captureSettings;                     //@synthesize stillImageCaptureSettings=_stillImageCaptureSettings - In the implementation block
@property (nonatomic,readonly) FigCaptureStillImageSettings * settings;                           //@synthesize stillImageSettings=_stillImageSettings - In the implementation block
@property (nonatomic,readonly) NSArray * bufferAttributes;                                        //@synthesize bufferAttributes=_bufferAttributes - In the implementation block
@property (nonatomic,readonly) NSArray * intermediates; 
+(void)initialize;
+(id)manifestDictionaryForURL:(id)arg1 err:(int*)arg2 ;
+(id)archiveObject:(id)arg1 error:(id*)arg2 ;
+(id)unarchiveObject:(id)arg1 classes:(id)arg2 error:(id*)arg3 ;
+(int)validateManifestURLSize:(id)arg1 ;
+(id)buildArchiveClasses:(id)arg1 ;
+(id)manifestDictionaryForCaptureRequestIdentifier:(id)arg1 photoDescriptors:(id)arg2 ;
+(BOOL)archiveObjectWithURL:(id)arg1 object:(id)arg2 error:(id*)arg3 ;
+(id)unarchiveObjectWithURL:(id)arg1 classes:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(void)dealloc;
-(FigCaptureStillImageSettings *)settings;
-(int)flush;
-(BOOL)hasTag:(id)arg1 ;
-(NSDictionary *)manifest;
-(int)_validate;
-(NSString *)applicationID;
-(BOOL)valid:(int*)arg1 ;
-(NSString *)captureRequestIdentifier;
-(BWStillImageCaptureSettings *)captureSettings;
-(unsigned long long)captureRequestIdentifierBytesLow;
-(unsigned long long)captureRequestIdentifierBytesHigh;
-(unsigned)processingType;
-(unsigned long long)_getUUIDBytes:(id)arg1 high:(BOOL)arg2 ;
-(id)_containerManifestURL;
-(id)initWithApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 baseFolderURL:(id)arg3 queuePriority:(unsigned)arg4 err:(int*)arg5 ;
-(long long)manifestVersion;
-(NSArray *)intermediates;
-(id)_intermediateForTag:(id)arg1 ;
-(int)_writeManifest;
-(id)_containerSessionDataURL;
-(id)_stillImageCaptureSettingsURL;
-(id)_stillImageSettingsURL;
-(id)_intermediateFolderURL;
-(id)_intermediateArrayURLForTag:(id)arg1 ;
-(id)_intermediateDictionaryURLForTag:(id)arg1 ;
-(id)_intermediateMetadataURLForTag:(id)arg1 ;
-(id)_intermediateBufferURLForTag:(id)arg1 compressionProfile:(int)arg2 ;
-(NSArray *)bufferAttributes;
@end

