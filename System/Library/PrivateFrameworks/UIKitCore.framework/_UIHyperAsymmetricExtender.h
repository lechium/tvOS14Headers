/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIHyperExtender_Internal.h>
#import <UIKitCore/_UIHyperExtender.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIHyperAsymmetricExtender : NSObject <_UIHyperExtender_Internal, _UIHyperExtender, NSSecureCoding, NSCopying> {

	double* __extentBeyondMinimum;
	double* __extentBeyondMaximum;
	double* __temp;
	unsigned long long __dimensions;

}

@property (nonatomic,readonly) const double* _extentBeyondMinimum; 
@property (nonatomic,readonly) const double* _extentBeyondMaximum; 
@property (nonatomic,readonly) unsigned long long _dimensions;                  //@synthesize _dimensions=__dimensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSelf;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDimensions:(unsigned long long)arg1 ;
-(unsigned long long)_dimensions;
-(void)_mutateExtentBeyondMinimum:(/*^block*/id)arg1 ;
-(void)_mutateExtentBeyondMaximum:(/*^block*/id)arg1 ;
-(void)_extentVector:(double*)arg1 forUnconstrainedPoint:(const double*)arg2 closestPoint:(const double*)arg3 ;
-(const double*)_extentBeyondMinimum;
-(const double*)_extentBeyondMaximum;
@end

