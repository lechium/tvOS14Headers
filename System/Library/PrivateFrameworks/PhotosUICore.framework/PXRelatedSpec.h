/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:01 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@interface PXRelatedSpec : PXFeatureSpec {

	long long _numberOfColumns;
	CGSize _interEntrySpacing;

}

@property (nonatomic,readonly) long long numberOfColumns;              //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,readonly) CGSize interEntrySpacing;               //@synthesize interEntrySpacing=_interEntrySpacing - In the implementation block
-(long long)numberOfColumns;
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(id)createViewSpecWithDescriptor:(PXViewSpecDescriptor)arg1 ;
-(CGSize)interEntrySpacing;
@end

