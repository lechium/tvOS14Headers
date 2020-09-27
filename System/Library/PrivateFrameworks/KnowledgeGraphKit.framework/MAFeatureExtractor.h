/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:09 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MAFeatureExtractor : NSObject

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * featureNames; 
-(NSString *)name;
-(NSArray *)featureNames;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(id)defaultFloatVectorWithError:(id*)arg1 ;
-(id)featureVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(id)floatMatrixWithEntities:(id)arg1 error:(id*)arg2 ;
-(id)featureVectorsWithEntities:(id)arg1 entityLabels:(id)arg2 error:(id*)arg3 ;
@end
