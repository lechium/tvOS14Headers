/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:45 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRRecognizerFeatureProviding <NSObject>
@required
-(void)enumerateInputsForImage:(id)arg1 textFeatures:(id)arg2 usingBlock:(/*^block*/id)arg3;
-(id)pruneAndSortRecognizedTextFeatures:(id)arg1;
-(id)initWithConfiguration:(id)arg1 inputProvider:(id)arg2 error:(id*)arg3;

@end
