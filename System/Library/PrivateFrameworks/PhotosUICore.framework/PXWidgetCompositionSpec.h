/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:11 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class PXWidgetSpec, PXWidgetBarSpec;

@interface PXWidgetCompositionSpec : NSObject {

	PXWidgetSpec* _widgetSpec;
	long long _maximumNumberOfColumns;
	PXWidgetBarSpec* _footerSpec;
	long long _disclosureLocation;
	PXWidgetBarSpec* __defaultHeaderSpec;
	PXWidgetBarSpec* __headerSpecForFlushedContent;

}

@property (nonatomic,readonly) PXWidgetBarSpec * _defaultHeaderSpec;                        //@synthesize _defaultHeaderSpec=__defaultHeaderSpec - In the implementation block
@property (nonatomic,readonly) PXWidgetBarSpec * _headerSpecForFlushedContent;              //@synthesize _headerSpecForFlushedContent=__headerSpecForFlushedContent - In the implementation block
@property (nonatomic,readonly) PXWidgetSpec * widgetSpec;                                   //@synthesize widgetSpec=_widgetSpec - In the implementation block
@property (nonatomic,readonly) long long maximumNumberOfColumns;                            //@synthesize maximumNumberOfColumns=_maximumNumberOfColumns - In the implementation block
@property (nonatomic,readonly) PXWidgetBarSpec * footerSpec;                                //@synthesize footerSpec=_footerSpec - In the implementation block
@property (nonatomic,readonly) long long disclosureLocation;                                //@synthesize disclosureLocation=_disclosureLocation - In the implementation block
-(id)init;
-(PXWidgetSpec *)widgetSpec;
-(long long)maximumNumberOfColumns;
-(id)initWithExtendedTraitCollection:(id)arg1 widgetSpec:(id)arg2 ;
-(id)headerSpecForWidgetContentLayoutStyle:(long long)arg1 ;
-(PXWidgetBarSpec *)footerSpec;
-(long long)disclosureLocation;
-(PXWidgetBarSpec *)_defaultHeaderSpec;
-(PXWidgetBarSpec *)_headerSpecForFlushedContent;
@end

