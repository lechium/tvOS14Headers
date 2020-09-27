/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MLCustomModel.h>

@class MLModelDescription;

@interface _MLNLPWordTaggingModel : NSObject <MLCustomModel> {

	void* _wordTaggingModel;
	MLModelDescription* _modelDescription;

}

@property (retain) MLModelDescription * modelDescription;              //@synthesize modelDescription=_modelDescription - In the implementation block
-(void)dealloc;
-(MLModelDescription *)modelDescription;
-(id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)setModelDescription:(MLModelDescription *)arg1 ;
-(id)initWithModelDescription:(id)arg1 parameterDictionary:(id)arg2 error:(id*)arg3 ;
@end
