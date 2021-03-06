/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSData;



@interface GMMPolyLine : PBCodable 
{
    NSInteger _lineWidth;
    BOOL _hasLineWidth;
    NSInteger _lineColor;
    BOOL _hasLineColor;
    NSData *_line;
}

@property(readonly) BOOL hasLine;
@property(retain) NSData *line; /* unknown property attribute: V_line */
@property(readonly) BOOL hasLineColor; /* unknown property attribute: V_hasLineColor */
@property NSInteger lineColor; /* unknown property attribute: V_lineColor */
@property(readonly) BOOL hasLineWidth; /* unknown property attribute: V_hasLineWidth */
@property NSInteger lineWidth; /* unknown property attribute: V_lineWidth */


- (id)init;
- (void)dealloc;
- (void)setLineWidth:(NSInteger)arg1;
- (void)setLineColor:(NSInteger)arg1;
- (BOOL)hasLine;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (id)line;
- (void)setLine:(id)arg1;
- (BOOL)hasLineColor;
- (NSInteger)lineColor;
- (BOOL)hasLineWidth;
- (NSInteger)lineWidth;

@end
