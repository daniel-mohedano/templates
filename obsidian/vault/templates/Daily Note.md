---
obsidianUIMode: source
weekday: <% tp.date.now("dddd") %>
type: daily_note
template:
    - "[[Daily Note]]"
tags:
---
<%*
let previousDate = tp.date.now("YYYY-MM-DD", -1)
let nextDate = tp.date.now("YYYY-MM-DD", 1)
const thisDay = tp.date.now("dddd")
if (thisDay == "Monday") {
    previousDate = tp.date.now("YYYY-MM-DD", -3)
} else if (thisDay == "Friday") {
    nextDate = tp.date.now("YYYY-MM-DD", 3)
}
-%>
[[Daily <% previousDate %> |Previous Day]] | [[Daily <% nextDate %> |Next Day]]
# <% tp.date.now("dddd") %> Notes

## Summary
<% tp.file.cursor() %>

> [!meetings]
> ```dataview
> LIST
> FROM "meetings"
> WHERE  type = "meeting" AND file.cday = this.file.day
> ```

### For Tomorrow

### Tasks Completed
```tasks
done <% tp.date.now("YYYY-MM-DD") %>
```

### Files Created
```dataview
LIST
WHERE file.cday = this.file.day
```