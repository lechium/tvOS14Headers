/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMediaUtilities-Structs.h>
#import <AXMediaUtilities/AXMLayoutItem.h>

@class NSMutableArray;

@interface AXMLayoutRegion : AXMLayoutItem {

	NSMutableArray* _lines;

}
+(id)region:(id)arg1 ;
-(void)addLine:(id)arg1 ;
-(CGRect)frame;
-(id)lines;
-(id)firstLine;
-(CGRect)normalizedFrame;
@end

