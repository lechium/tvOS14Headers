/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PFLTaskStateProvider <NSObject>
@optional
-(id)metricsProvider;
-(int)modelVersion;
-(id)resourceManager;
-(id)metricsIdentifier;
-(id)validationProvider;
-(id)uploadResultsIdentifier;

@required
-(id)taskIdentifier;
-(id)layerNames;
-(id)modelIdentifier;
-(id)dataProvider;
-(id)modelConfiguration;
-(double)privatizationNormMax;
-(unsigned long long)privatizationNormBinCount;
-(double)validationSplit;
-(id)compiledModelURL;

@end

