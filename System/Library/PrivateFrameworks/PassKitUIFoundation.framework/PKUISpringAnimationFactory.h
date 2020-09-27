/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKSpringAnimationFactory.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class NSString;

@interface PKUISpringAnimationFactory : PKSpringAnimationFactory <_UIBasicAnimationFactory> {

	/*^block*/id _animationDelayHandler;
	double _maximumVendedDelay;

}

@property (nonatomic,copy) id animationDelayHandler;                   //@synthesize animationDelayHandler=_animationDelayHandler - In the implementation block
@property (nonatomic,readonly) double maximumVendedDelay;              //@synthesize maximumVendedDelay=_maximumVendedDelay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_springAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)springAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)setAnimationDelayHandler:(id)arg1 ;
-(id)animationDelayHandler;
-(double)maximumVendedDelay;
@end
