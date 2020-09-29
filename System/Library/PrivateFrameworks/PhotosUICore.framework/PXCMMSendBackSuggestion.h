/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:58 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSSet, NSArray, PHAssetCollection;

@interface PXCMMSendBackSuggestion : NSObject {

	NSSet* _participants;
	NSArray* _recipients;
	PHAssetCollection* _assetCollection;

}

@property (nonatomic,readonly) NSSet * participants;                             //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) NSArray * recipients;                             //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
+(id)new;
-(id)init;
-(NSArray *)recipients;
-(NSSet *)participants;
-(PHAssetCollection *)assetCollection;
-(id)initWithAssetCollection:(id)arg1 participants:(id)arg2 ;
@end

