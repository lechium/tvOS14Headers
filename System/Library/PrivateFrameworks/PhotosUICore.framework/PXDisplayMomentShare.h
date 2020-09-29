/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:04 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class NSURL, NSDate, NSString;


@protocol PXDisplayMomentShare <PXDisplayAssetCollection,PXMediaTypeAggregating>
@property (nonatomic,readonly) unsigned short status; 
@property (nonatomic,readonly) unsigned long long assetCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) unsigned long long uploadedPhotosCount; 
@property (nonatomic,readonly) unsigned long long uploadedVideosCount; 
@property (nonatomic,readonly) NSURL * shareURL; 
@property (nonatomic,readonly) NSDate * expiryDate; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) long long px_momentShareType; 
@required
-(unsigned short)status;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)localizedTitle;
-(NSDate *)expiryDate;
-(unsigned long long)photosCount;
-(unsigned long long)assetCount;
-(NSURL *)shareURL;
-(unsigned long long)videosCount;
-(unsigned long long)uploadedPhotosCount;
-(unsigned long long)uploadedVideosCount;
-(long long)px_momentShareType;

@end

