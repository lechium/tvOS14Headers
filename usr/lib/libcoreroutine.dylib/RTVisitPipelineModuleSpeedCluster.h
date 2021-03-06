/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTVisitPipelineModule.h>

@class RTVisit, RTLocation, RTVisitHyperParameter, NSString;

@interface RTVisitPipelineModuleSpeedCluster : NSObject <RTVisitPipelineModule> {

	RTVisit* _workingVisit;
	RTLocation* _lastPoint;
	RTVisitHyperParameter* _hyperParameter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(id)process:(id)arg1 ;
-(id)initWithHyperParameter:(id)arg1 ;
-(void)clearWorkingVisit;
-(void)clearAndAddForcedExitSignalToClusters:(id)arg1 ;
@end

