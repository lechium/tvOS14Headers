/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:03 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSDate, CLLocation;

@interface _PXFileBackedAssetMetadata : NSObject {

	NSDate* _date;
	CLLocation* _location;
	CGSize _size;

}

@property (assign,nonatomic) CGSize size;                        //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
-(CGSize)size;
-(NSDate *)date;
-(void)setSize:(CGSize)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
@end
