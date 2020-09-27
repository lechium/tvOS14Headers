/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol CCVegaCARendererJSExport <JSExport>
@property (retain) NSString * backgroundColor; 
@optional
-(void)resizeWidth:(double)arg1 height:(double)arg2 originX:(double)arg3 originY:(double)arg4 __JS_EXPORT_AS__resize:(id)arg5;
-(void)render:(id)arg1 __JS_EXPORT_AS__render:(id)arg2;

@required
-(NSString *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(void)render:(id)arg1;
-(void)dirty;
-(void)dirtyAll;
-(void)resizeWidth:(double)arg1 height:(double)arg2 originX:(double)arg3 originY:(double)arg4;

@end
