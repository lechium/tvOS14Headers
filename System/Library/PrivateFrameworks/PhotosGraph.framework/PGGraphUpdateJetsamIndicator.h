/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:49 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface PGGraphUpdateJetsamIndicator : NSObject {

	BOOL _indicatorExists;
	NSURL* _indicatorURL;
	long long _retryCount;
	long long _maxRetryCount;

}

@property (nonatomic,readonly) NSURL * indicatorURL;                   //@synthesize indicatorURL=_indicatorURL - In the implementation block
@property (assign,nonatomic) long long retryCount;                     //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) BOOL indicatorExists;                     //@synthesize indicatorExists=_indicatorExists - In the implementation block
@property (assign,nonatomic) long long maxRetryCount;                  //@synthesize maxRetryCount=_maxRetryCount - In the implementation block
@property (nonatomic,readonly) BOOL updateDidCauseJetsam; 
-(id)description;
-(long long)retryCount;
-(void)setRetryCount:(long long)arg1 ;
-(void)clear;
-(long long)maxRetryCount;
-(void)setMaxRetryCount:(long long)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)initWithIndicatorDirectoryURL:(id)arg1 ;
-(BOOL)updateDidCauseJetsam;
-(void)markUpdate;
-(void)_readIndicator;
-(void)_removeIndicator;
-(NSURL *)indicatorURL;
-(BOOL)indicatorExists;
-(void)setIndicatorExists:(BOOL)arg1 ;
@end

