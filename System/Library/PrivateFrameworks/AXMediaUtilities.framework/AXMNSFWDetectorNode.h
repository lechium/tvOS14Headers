/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class VNVYvzEtX1JlUdu8xx5qhDI;

@interface AXMNSFWDetectorNode : AXMEvaluationNode {

	VNVYvzEtX1JlUdu8xx5qhDI* _request;

}
+(BOOL)supportsSecureCoding;
+(id)title;
+(BOOL)isSupported;
+(BOOL)addNSFWResultToContext:(id)arg1 forIdentifier:(id)arg2 confidence:(double)arg3 markAsSensitiveCaptionContent:(BOOL)arg4 ;
-(BOOL)validateVisionKitSoftLinkSymbols;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
@end
