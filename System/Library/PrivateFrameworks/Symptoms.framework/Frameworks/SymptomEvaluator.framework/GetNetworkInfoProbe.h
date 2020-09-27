/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/NetDiagnosticProbe.h>

@class NSMutableArray;

@interface GetNetworkInfoProbe : NetDiagnosticProbe {

	NSMutableArray* _probeOutputFilePaths;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic) id completionBlock;              //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)dealloc;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(id)initWithQueue:(id)arg1 ;
-(void)stopTest;
-(BOOL)startNetDiagnosticsTask:(/*^block*/id)arg1 ;
-(id)probeOutputFilePaths;
-(void)netDiagnosticTaskStatusChangedFor:(id)arg1 toStatus:(int)arg2 ;
@end
