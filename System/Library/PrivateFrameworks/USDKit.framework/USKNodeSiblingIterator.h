/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:49:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <USDKit/USDKit-Structs.h>
#import <USDKit/USKIterator.h>

@interface USKNodeSiblingIterator : NSObject <USKIterator> {

	iterator_range<pxrInternal_v0_20__pxrReserved__usdkit__::UsdPrimSiblingIterator>* _range;
	UsdPrimSiblingIterator* _it;

}
-(id)nextObject;
-(id)initWithPrim:(const UsdPrim*)arg1 ;
-(id)initWithPrim:(const UsdPrim*)arg1 withPredicate:(Usd_PrimFlagsPredicate)arg2 ;
-(id)initWithSiblingRange:(const iterator_range<pxrInternal_v0_20__pxrReserved__usdkit__::UsdPrimSiblingIterator>*)arg1 ;
@end

