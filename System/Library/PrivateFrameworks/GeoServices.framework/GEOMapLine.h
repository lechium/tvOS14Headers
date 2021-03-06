/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapLine <NSObject>
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng* coordinates; 
@property (nonatomic,readonly) double length; 
@required
-(double)length;
-(GEOCoarseLocationLatLng*)coordinates;
-(unsigned long long)coordinateCount;
-(double)distanceFromCoordinate:(GEOCoarseLocationLatLng)arg1 outSegmentCoordinate:(PolylineCoordinate*)arg2;

@end

