/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:47 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/MLFeatureProvider.h>

@protocol MLFeatureProvider;
@class NSSet, NSString, VNSceneprint;

@interface VNMLFeatureProvider : NSObject <MLFeatureProvider> {

	NSString* _imageInputKey;
	CVBufferRef _buffer;
	VNSceneprint* _scenePrint;
	long long* _scenePrintMLMultiArrayDataType;
	id<MLFeatureProvider> _featureProvider;

}

@property (nonatomic,readonly) NSSet * featureNames; 
-(void)dealloc;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(id)initWithBuffer:(CVBufferRef)arg1 forKey:(id)arg2 originalFeatureProvider:(id)arg3 ;
-(id)initWithScenePrint:(id)arg1 dataType:(long long*)arg2 forKey:(id)arg3 originalFeatureProvider:(id)arg4 ;
-(id)featureValueFromScenePrint:(id)arg1 dataType:(long long)arg2 ;
@end

