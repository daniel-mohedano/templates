---
obsidianUIMode: preview
---
# Summary
```dataviewjs
(async () => {
  const now = new Date();
  const week = new Date(now);
  week.setDate(now.getDate() - 8);
  let pages = dv.pages('"notes"').where(p => p.type == "daily_note" && p.file.cday >= week).sort(p => p.file.cday, 'asc')

  const rows = [];
  for (let page of pages) {
    const content = await dv.io.load(page.file.path);
    const match = content.match(/## Summary\n([\s\S]*?)(?=\n> \[!meetings\])/);
    const summary = match ? match[1].trim() : "No summary found";
    rows.push([page.file.link, page.weekday, summary]);
  }
  
  dv.table(["Name", "Day", "Summary"], rows);
})();
```

# Meetings
```dataview
LIST file.link
FROM "meetings"
WHERE type = "meeting" AND file.cday >= (date(now) - dur(8 days))
```

# Tasks Completed

```dataview
TASK
WHERE completed AND completion >= date(today) - dur(8 days)
SORT completion DESC
```