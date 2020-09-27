/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AlgosScoreFramework.framework/AlgosScoreFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AlgosConnectionScore : NSObject {

	void* connectionData;
	BOOL _debug;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic) BOOL debug;                              //@synthesize debug=_debug - In the implementation block
+(id)connectionScore;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(BOOL)debug;
-(void)setDebug:(BOOL)arg1 ;
-(void)addConnectionRow:(unsigned long long)arg1 ttfb:(double)arg2 ttlb:(double)arg3 basettfb:(double)arg4 basettlb:(double)arg5 weight:(double)arg6 failed:(int)arg7 ;
-(id)scoreConnection:(BOOL)arg1 label:(id)arg2 ;
-(void)clearConnectionRows;
@end
