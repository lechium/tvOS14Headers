/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@class NSSet;

@interface CRTextDetectorModelInput : NSObject <MLFeatureProvider> {

	CVBufferRef _data;

}

@property (assign,nonatomic) CVBufferRef data;                    //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(CVBufferRef)data;
-(id)initWithData:(CVBufferRef)arg1 ;
-(void)setData:(CVBufferRef)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
@end
