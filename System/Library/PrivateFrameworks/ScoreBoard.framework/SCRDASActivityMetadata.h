/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:30 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ScoreBoard.framework/ScoreBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCRActivity, _DASActivity;

@interface SCRDASActivityMetadata : NSObject {

	unsigned long long _state;
	SCRActivity* _activity;
	_DASActivity* _dasActivity;

}

@property (assign,nonatomic) unsigned long long state;                //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) SCRActivity * activity;                  //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) _DASActivity * dasActivity;              //@synthesize dasActivity=_dasActivity - In the implementation block
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(SCRActivity *)activity;
-(void)setActivity:(SCRActivity *)arg1 ;
-(_DASActivity *)dasActivity;
-(void)setDasActivity:(_DASActivity *)arg1 ;
@end

