/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _CLLocationSmootherProxy;

@interface CLLocationSmoother : NSObject {

	_CLLocationSmootherProxy* _locationManagerSmootherProxy;

}

@property (nonatomic,retain,readonly) _CLLocationSmootherProxy * locationManagerSmootherProxy; 
@property (assign,nonatomic) id<CLLocationManagerDelegateInternal> delegate; 
-(void)dealloc;
-(id<CLLocationManagerDelegateInternal>)delegate;
-(void)setDelegate:(id<CLLocationManagerDelegateInternal>)arg1 ;
-(void)smoothLocations:(id)arg1 handler:(/*^block*/id)arg2 ;
-(_CLLocationSmootherProxy *)locationManagerSmootherProxy;
-(void)smoothLocations:(id)arg1 ;
@end

