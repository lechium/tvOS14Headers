/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineMultiscopeSyncTask.h>

@interface CPLPushToTransportTask : CPLEngineMultiscopeSyncTask {

	BOOL _deferredCancel;
	BOOL _highPriority;

}

@property (assign,nonatomic) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
-(id)taskIdentifier;
-(void)cancel:(BOOL)arg1 ;
-(void)setHighPriority:(BOOL)arg1 ;
-(BOOL)highPriority;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)enumerateScopesForTaskInTransaction:(id)arg1 ;
-(id)newScopedTaskWithScope:(id)arg1 session:(id)arg2 transportScope:(id)arg3 clientCacheIdentifier:(id)arg4 ;
-(BOOL)shouldSkipScopesWithMissingTransportScope;
-(void)taskDidFinishWithError:(id)arg1 ;
@end

