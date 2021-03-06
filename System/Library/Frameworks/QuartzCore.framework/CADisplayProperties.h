/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayMode, NSString;

@interface CADisplayProperties : NSObject {

	CADisplayMode* _currentMode;
	NSString* _overscanAdjustment;
	unsigned _connectionSeed;

}

@property (nonatomic,retain) CADisplayMode * currentMode; 
@property (nonatomic,copy) NSString * overscanAdjustment; 
@property (assign,nonatomic) unsigned connectionSeed; 
-(void)dealloc;
-(CADisplayMode *)currentMode;
-(unsigned)connectionSeed;
-(NSString *)overscanAdjustment;
-(void)setCurrentMode:(CADisplayMode *)arg1 ;
-(void)setOverscanAdjustment:(NSString *)arg1 ;
-(void)setConnectionSeed:(unsigned)arg1 ;
@end

