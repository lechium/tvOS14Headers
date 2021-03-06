/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface PLRevGeoMapItemAdditionalPlaceInfo : NSObject <NSSecureCoding> {

	NSString* _name;
	NSNumber* _placeType;
	unsigned long long _dominantOrderType;
	double _areaInSquareMeters;

}

@property (nonatomic,copy,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * placeType;                         //@synthesize placeType=_placeType - In the implementation block
@property (nonatomic,readonly) unsigned long long dominantOrderType;              //@synthesize dominantOrderType=_dominantOrderType - In the implementation block
@property (nonatomic,readonly) double areaInSquareMeters;                         //@synthesize areaInSquareMeters=_areaInSquareMeters - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)placeType;
-(double)areaInSquareMeters;
-(id)initWithName:(id)arg1 placeType:(id)arg2 dominantOrderType:(unsigned long long)arg3 areaInSquareMeters:(double)arg4 ;
-(unsigned long long)dominantOrderType;
@end

