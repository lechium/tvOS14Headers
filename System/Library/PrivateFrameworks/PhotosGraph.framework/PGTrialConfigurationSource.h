/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:53 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGConfigurationSource.h>

@class PGTrialSession, NSString;

@interface PGTrialConfigurationSource : NSObject <PGConfigurationSource> {

	unsigned short _namespaceType;
	PGTrialSession* _trialSession;

}

@property (nonatomic,retain) PGTrialSession * trialSession;              //@synthesize trialSession=_trialSession - In the implementation block
@property (assign,nonatomic) unsigned short namespaceType;               //@synthesize namespaceType=_namespaceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectForKey:(id)arg1 ;
-(PGTrialSession *)trialSession;
-(void)setTrialSession:(PGTrialSession *)arg1 ;
-(id)initWithTrialSession:(id)arg1 namespaceType:(unsigned short)arg2 ;
-(unsigned short)namespaceType;
-(void)setNamespaceType:(unsigned short)arg1 ;
@end
