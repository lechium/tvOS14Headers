/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/TDElementAttributes.h>

@class NSDate, NSNumber, NSManagedObject, TDColorName;

@interface TDColorDefinition : NSManagedObject <TDElementAttributes>

@property (nonatomic,retain) NSDate * dateOfLastChange; 
@property (nonatomic,retain) NSNumber * physicalColor; 
@property (nonatomic,retain) NSManagedObject * colorStatus; 
@property (nonatomic,retain) TDColorName * name; 
-(void)copyAttributesInto:(id)arg1 ;
-(id)copyDataFromAttributes;
-(void)setAttributesFromCopyData:(id)arg1 ;
-(id)dataFromAttributes;
-(void)setAttributesFromData:(id)arg1 ;
-(id)colorAsString;
@end
