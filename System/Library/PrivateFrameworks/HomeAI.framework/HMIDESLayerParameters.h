/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:56 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, HMIDESMutableFloatArray;

@interface HMIDESLayerParameters : HMFObject {

	NSString* _name;
	HMIDESMutableFloatArray* _weights;
	HMIDESMutableFloatArray* _biases;

}

@property (readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (readonly) HMIDESMutableFloatArray * weights;              //@synthesize weights=_weights - In the implementation block
@property (readonly) HMIDESMutableFloatArray * biases;               //@synthesize biases=_biases - In the implementation block
-(NSString *)name;
-(HMIDESMutableFloatArray *)weights;
-(HMIDESMutableFloatArray *)biases;
-(id)initWithName:(id)arg1 weights:(id)arg2 biases:(id)arg3 ;
@end
