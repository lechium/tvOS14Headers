/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

@class NSString;


@protocol PXGAXInfo <PXGAXElement>
@property (nonatomic,readonly) long long axContentKind; 
@property (nonatomic,readonly) NSString * axText; 
@property (nonatomic,readonly) NSString * axTitle; 
@property (nonatomic,readonly) NSString * axSubtitle; 
@property (nonatomic,readonly) NSString * axImageName; 
@property (nonatomic,readonly) id<PXDisplayAsset> axAsset; 
@property (nonatomic,readonly) NSObject*<PXAnonymousView> axView; 
@required
-(long long)axContentKind;
-(NSString *)axText;
-(NSString *)axTitle;
-(NSString *)axSubtitle;
-(NSString *)axImageName;
-(id<PXDisplayAsset>)axAsset;
-(NSObject*<PXAnonymousView>)axView;

@end
